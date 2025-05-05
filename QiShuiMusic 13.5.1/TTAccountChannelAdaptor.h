@interface TTAccountChannelAdaptor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onAccountStatusChanged:platform:;
+ (id)encryptedUserID;
+ (void)registerChannel;
+ (id)historicalUserIDs;
+ (id)userID;
+ (id)sharedInstance;
@end
