@interface AWEIMJoinGroupGetGiftsNetwork : NSObject
+ (void)__updateJoinGroupGetGiftsForUid:type:couponId:completion:;
+ (void)fetchJoinGroupGetGiftsForUid:onlyNeedStatus:completion:;
+ (void)setupJoinGroupGetGiftsForUid:couponId:completion:;
+ (void)revokeJoinGroupGetGiftsForUid:couponId:completion:;
@end
