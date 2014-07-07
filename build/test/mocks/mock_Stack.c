/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "mock_Stack.h"

typedef struct _CMOCK_Stack_create_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  Stack* ReturnVal;
  int CallOrder;
  CEXCEPTION_T ExceptionToThrow;

} CMOCK_Stack_create_CALL_INSTANCE;

typedef struct _CMOCK_Stack_push_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  Stack* Expected_stack;
  void* Expected_element;
  CEXCEPTION_T ExceptionToThrow;

} CMOCK_Stack_push_CALL_INSTANCE;

typedef struct _CMOCK_Stack_pop_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  void* ReturnVal;
  int CallOrder;
  Stack* Expected_stack;
  CEXCEPTION_T ExceptionToThrow;

} CMOCK_Stack_pop_CALL_INSTANCE;

static struct mock_StackInstance
{
  int Stack_create_IgnoreBool;
  Stack* Stack_create_FinalReturn;
  CMOCK_Stack_create_CALLBACK Stack_create_CallbackFunctionPointer;
  int Stack_create_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE Stack_create_CallInstance;
  int Stack_push_IgnoreBool;
  CMOCK_Stack_push_CALLBACK Stack_push_CallbackFunctionPointer;
  int Stack_push_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE Stack_push_CallInstance;
  int Stack_pop_IgnoreBool;
  void* Stack_pop_FinalReturn;
  CMOCK_Stack_pop_CALLBACK Stack_pop_CallbackFunctionPointer;
  int Stack_pop_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE Stack_pop_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_Stack_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.Stack_create_IgnoreBool)
    Mock.Stack_create_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.Stack_create_CallInstance, cmock_line, "Function 'Stack_create' called less times than expected.");
  if (Mock.Stack_create_CallbackFunctionPointer != NULL)
    Mock.Stack_create_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.Stack_push_IgnoreBool)
    Mock.Stack_push_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.Stack_push_CallInstance, cmock_line, "Function 'Stack_push' called less times than expected.");
  if (Mock.Stack_push_CallbackFunctionPointer != NULL)
    Mock.Stack_push_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.Stack_pop_IgnoreBool)
    Mock.Stack_pop_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.Stack_pop_CallInstance, cmock_line, "Function 'Stack_pop' called less times than expected.");
  if (Mock.Stack_pop_CallbackFunctionPointer != NULL)
    Mock.Stack_pop_CallInstance = CMOCK_GUTS_NONE;
}

void mock_Stack_Init(void)
{
  mock_Stack_Destroy();
}

void mock_Stack_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.Stack_create_CallbackFunctionPointer = NULL;
  Mock.Stack_create_CallbackCalls = 0;
  Mock.Stack_push_CallbackFunctionPointer = NULL;
  Mock.Stack_push_CallbackCalls = 0;
  Mock.Stack_pop_CallbackFunctionPointer = NULL;
  Mock.Stack_pop_CallbackCalls = 0;
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

Stack* Stack_create(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_Stack_create_CALL_INSTANCE* cmock_call_instance = (CMOCK_Stack_create_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.Stack_create_CallInstance);
  Mock.Stack_create_CallInstance = CMock_Guts_MemNext(Mock.Stack_create_CallInstance);
  if (Mock.Stack_create_IgnoreBool)
  {
    if (cmock_call_instance == NULL)
      return Mock.Stack_create_FinalReturn;
    Mock.Stack_create_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.Stack_create_CallbackFunctionPointer != NULL)
  {
    return Mock.Stack_create_CallbackFunctionPointer(Mock.Stack_create_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'Stack_create' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'Stack_create' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'Stack_create' called later than expected.");
  if (cmock_call_instance->ExceptionToThrow != CEXCEPTION_NONE)
  {
    Throw(cmock_call_instance->ExceptionToThrow);
  }
  return cmock_call_instance->ReturnVal;
}

void Stack_create_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, Stack* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Stack_create_CALL_INSTANCE));
  CMOCK_Stack_create_CALL_INSTANCE* cmock_call_instance = (CMOCK_Stack_create_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.Stack_create_CallInstance = CMock_Guts_MemChain(Mock.Stack_create_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExceptionToThrow = CEXCEPTION_NONE;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.Stack_create_IgnoreBool = (int)1;
}

void Stack_create_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, Stack* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Stack_create_CALL_INSTANCE));
  CMOCK_Stack_create_CALL_INSTANCE* cmock_call_instance = (CMOCK_Stack_create_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.Stack_create_CallInstance = CMock_Guts_MemChain(Mock.Stack_create_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ExceptionToThrow = CEXCEPTION_NONE;
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void Stack_create_StubWithCallback(CMOCK_Stack_create_CALLBACK Callback)
{
  Mock.Stack_create_CallbackFunctionPointer = Callback;
}

void Stack_create_CMockExpectAndThrow(UNITY_LINE_TYPE cmock_line, CEXCEPTION_T cmock_to_throw)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Stack_create_CALL_INSTANCE));
  CMOCK_Stack_create_CALL_INSTANCE* cmock_call_instance = (CMOCK_Stack_create_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.Stack_create_CallInstance = CMock_Guts_MemChain(Mock.Stack_create_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ExceptionToThrow = CEXCEPTION_NONE;
  cmock_call_instance->ExceptionToThrow = cmock_to_throw;
}

void Stack_push(Stack* stack, void* element)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_Stack_push_CALL_INSTANCE* cmock_call_instance = (CMOCK_Stack_push_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.Stack_push_CallInstance);
  Mock.Stack_push_CallInstance = CMock_Guts_MemNext(Mock.Stack_push_CallInstance);
  if (Mock.Stack_push_IgnoreBool)
  {
    return;
  }
  if (Mock.Stack_push_CallbackFunctionPointer != NULL)
  {
    Mock.Stack_push_CallbackFunctionPointer(stack, element, Mock.Stack_push_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'Stack_push' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'Stack_push' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'Stack_push' called later than expected.");
  UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_stack), (void*)(stack), sizeof(Stack), cmock_line, "Function 'Stack_push' called with unexpected value for argument 'stack'.");
  UNITY_TEST_ASSERT_EQUAL_PTR(cmock_call_instance->Expected_element, element, cmock_line, "Function 'Stack_push' called with unexpected value for argument 'element'.");
  if (cmock_call_instance->ExceptionToThrow != CEXCEPTION_NONE)
  {
    Throw(cmock_call_instance->ExceptionToThrow);
  }
}

void CMockExpectParameters_Stack_push(CMOCK_Stack_push_CALL_INSTANCE* cmock_call_instance, Stack* stack, void* element)
{
  cmock_call_instance->Expected_stack = stack;
  cmock_call_instance->Expected_element = element;
}

void Stack_push_CMockIgnore(void)
{
  Mock.Stack_push_IgnoreBool = (int)1;
}

void Stack_push_CMockExpect(UNITY_LINE_TYPE cmock_line, Stack* stack, void* element)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Stack_push_CALL_INSTANCE));
  CMOCK_Stack_push_CALL_INSTANCE* cmock_call_instance = (CMOCK_Stack_push_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.Stack_push_CallInstance = CMock_Guts_MemChain(Mock.Stack_push_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ExceptionToThrow = CEXCEPTION_NONE;
  CMockExpectParameters_Stack_push(cmock_call_instance, stack, element);
}

void Stack_push_StubWithCallback(CMOCK_Stack_push_CALLBACK Callback)
{
  Mock.Stack_push_CallbackFunctionPointer = Callback;
}

void Stack_push_CMockExpectAndThrow(UNITY_LINE_TYPE cmock_line, Stack* stack, void* element, CEXCEPTION_T cmock_to_throw)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Stack_push_CALL_INSTANCE));
  CMOCK_Stack_push_CALL_INSTANCE* cmock_call_instance = (CMOCK_Stack_push_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.Stack_push_CallInstance = CMock_Guts_MemChain(Mock.Stack_push_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ExceptionToThrow = CEXCEPTION_NONE;
  CMockExpectParameters_Stack_push(cmock_call_instance, stack, element);
  cmock_call_instance->ExceptionToThrow = cmock_to_throw;
}

void* Stack_pop(Stack* stack)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_Stack_pop_CALL_INSTANCE* cmock_call_instance = (CMOCK_Stack_pop_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.Stack_pop_CallInstance);
  Mock.Stack_pop_CallInstance = CMock_Guts_MemNext(Mock.Stack_pop_CallInstance);
  if (Mock.Stack_pop_IgnoreBool)
  {
    if (cmock_call_instance == NULL)
      return Mock.Stack_pop_FinalReturn;
    Mock.Stack_pop_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.Stack_pop_CallbackFunctionPointer != NULL)
  {
    return Mock.Stack_pop_CallbackFunctionPointer(stack, Mock.Stack_pop_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'Stack_pop' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'Stack_pop' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'Stack_pop' called later than expected.");
  UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_stack), (void*)(stack), sizeof(Stack), cmock_line, "Function 'Stack_pop' called with unexpected value for argument 'stack'.");
  if (cmock_call_instance->ExceptionToThrow != CEXCEPTION_NONE)
  {
    Throw(cmock_call_instance->ExceptionToThrow);
  }
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_Stack_pop(CMOCK_Stack_pop_CALL_INSTANCE* cmock_call_instance, Stack* stack)
{
  cmock_call_instance->Expected_stack = stack;
}

void Stack_pop_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, void* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Stack_pop_CALL_INSTANCE));
  CMOCK_Stack_pop_CALL_INSTANCE* cmock_call_instance = (CMOCK_Stack_pop_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.Stack_pop_CallInstance = CMock_Guts_MemChain(Mock.Stack_pop_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExceptionToThrow = CEXCEPTION_NONE;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.Stack_pop_IgnoreBool = (int)1;
}

void Stack_pop_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, Stack* stack, void* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Stack_pop_CALL_INSTANCE));
  CMOCK_Stack_pop_CALL_INSTANCE* cmock_call_instance = (CMOCK_Stack_pop_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.Stack_pop_CallInstance = CMock_Guts_MemChain(Mock.Stack_pop_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ExceptionToThrow = CEXCEPTION_NONE;
  CMockExpectParameters_Stack_pop(cmock_call_instance, stack);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void Stack_pop_StubWithCallback(CMOCK_Stack_pop_CALLBACK Callback)
{
  Mock.Stack_pop_CallbackFunctionPointer = Callback;
}

void Stack_pop_CMockExpectAndThrow(UNITY_LINE_TYPE cmock_line, Stack* stack, CEXCEPTION_T cmock_to_throw)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Stack_pop_CALL_INSTANCE));
  CMOCK_Stack_pop_CALL_INSTANCE* cmock_call_instance = (CMOCK_Stack_pop_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.Stack_pop_CallInstance = CMock_Guts_MemChain(Mock.Stack_pop_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ExceptionToThrow = CEXCEPTION_NONE;
  CMockExpectParameters_Stack_pop(cmock_call_instance, stack);
  cmock_call_instance->ExceptionToThrow = cmock_to_throw;
}

