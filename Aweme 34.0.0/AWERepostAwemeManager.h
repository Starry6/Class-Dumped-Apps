@interface AWERepostAwemeManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)addCityInfo:;
+ (void)createRepostWithModel:completion:;
+ (void)deleteRepostWithRepostId:completion:;
@end
