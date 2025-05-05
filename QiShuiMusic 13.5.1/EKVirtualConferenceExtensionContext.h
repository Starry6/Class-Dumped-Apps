@interface EKVirtualConferenceExtensionContext : NSExtensionContext
@property (nonatomic) NSInteger requestType;
@property (nonatomic) NSString roomTypeIdentifier;
@property (nonatomic) NSURL URLForInvalidation;
@property (nonatomic) NSURL URLForRenewal;
@property (nonatomic) NSDate renewalDate;
- (int)requestType;
- (id)renewalDate;
- (id)roomTypeIdentifier;
- (id)URLForInvalidation;
- (id)URLForRenewal;
- (void)completeRequestWithAvailableRoomTypes:completionHandler:;
- (void)completeRequestWithVirtualConference:completionHandler:;
- (void)completeRequestWithInvalidationSuccess:error:completionHandler:;
- (void)completeRequestWithRenewalSuccess:error:completionHandler:;
+ (id)_allowedItemPayloadClasses;
@end
