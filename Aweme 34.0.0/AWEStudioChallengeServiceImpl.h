@interface AWEStudioChallengeServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)requestChallengeItemWithID:isCommerce:completion:;
- (void)requestHashTagItemWithName:completion:;
- (void)requestChallengeItemWithID:completion:;
@end
