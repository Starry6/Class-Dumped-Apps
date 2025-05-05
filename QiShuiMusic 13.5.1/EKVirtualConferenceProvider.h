@interface EKVirtualConferenceProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)beginRequestWithExtensionContext:;
- (void)fetchAvailableRoomTypesWithCompletionHandler:;
- (void)fetchVirtualConferenceForIdentifier:completionHandler:;
- (void)isURLValid:withCompletion:;
- (void)extendExpirationOfURL:toExpirationDate:withCompletion:;
- (void)invalidateURL:withCompletionHandler:;
@end
