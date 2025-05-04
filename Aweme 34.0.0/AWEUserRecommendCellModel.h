@interface AWEUserRecommendCellModel : NSObject
@property (nonatomic) AWEUserModel user;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:;
- (id)recommendReason;
- (id)user;
- (void)setUser:;
- (void).cxx_destruct;
@end
