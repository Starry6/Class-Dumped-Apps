@interface AWEIMFPSOptimizeUtils : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enableSlardarHangOpt;
- (BOOL)enableConversationFPSOptV2;
- (BOOL)enableMessageTabOpt;
+ (id)sharedInstance;
@end
