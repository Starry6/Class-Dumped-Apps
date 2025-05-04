@interface AWEFeedMonitorManager : NSObject
+ (id)commonParamsWithModel:error:enterFrom:awemeType:;
+ (id)commonParamsWithLogId:error:enterFrom:;
+ (id)errorParamsWithAwemeModel:;
+ (id)commonParamsWithLogId:error:enterFrom:awemeType:;
+ (id)errorParamsForEmpty;
+ (id)errorParamsNotMixWithAwemeModel:;
+ (id)errorParamsWithError:isNetworkError:;
+ (id)errorParamsWithMixModel:;
@end
