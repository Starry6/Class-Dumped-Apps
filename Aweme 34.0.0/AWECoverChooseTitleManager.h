@interface AWECoverChooseTitleManager : NSObject
+ (void)fetchTitlesWithModel:completion:;
+ (id)keyWithModel:;
+ (void)fetchCompleteWithModel:result:error:completion:;
+ (void)trackEndWithError:;
+ (id)cacheKey;
+ (void)trackStart;
@end
