@interface AWEFeedDecouplingUtil : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)enableConcernDecoupling;
+ (BOOL)enableDetailDeleteDecoupling;
+ (BOOL)enableNunkiDecoupling;
+ (BOOL)enableBookDecoupling;
+ (id)decouplingLibraDic;
+ (id)detailDecouplingLibraDic;
+ (BOOL)enableIpadDecoupling;
+ (BOOL)enableUGDecoupling;
+ (BOOL)enableFeedStoryDecoupling;
+ (BOOL)enableFriendDecoupling;
@end
