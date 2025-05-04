@interface AWEUserRecommendErrorHelper : NSObject
+ (id)requestOnAirError;
+ (BOOL)isUserRecommendError:;
+ (BOOL)isRequestOnAirError:;
+ (id)userRecommendErrorWithCode:description:;
+ (id)noMoreDataError;
+ (id)recommendClosedError;
+ (id)notLoginError;
+ (BOOL)isNoMoreDataError:;
+ (BOOL)isRecommendClosedError:;
+ (BOOL)isNotLoginError:;
@end
