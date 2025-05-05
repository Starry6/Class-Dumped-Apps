@interface AVURLAuthenticationChallenge : NSURLAuthenticationChallenge
@property (nonatomic) Q _requestID;
@property (nonatomic) ^{__CFDictionary=} _requestInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)initWithProtectionSpace:proposedCredential:previousFailureCount:failureResponse:error:sender:;
- (id)_weakReference;
- (id)initWithAuthenticationChallenge:sender:requestInfo:requestID:;
- (BOOL)_shouldInformDelegateOfFigCancellation;
- (void)_performCancellationByClient;
- (id)initWithAuthenticationChallenge:sender:;
- (unsigned long long)_requestID;
- (id)_requestInfo;
+ (SEL)_selectorForInformingDelegateOfCancellationByFig;
@end
