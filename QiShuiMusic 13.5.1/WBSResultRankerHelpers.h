@interface WBSResultRankerHelpers : NSObject
+ (BOOL)hostAreEqual:forSecondURLString:;
+ (id)simplifiedURL:;
+ (long long)numberOfWords:;
+ (double)topSitesScoreAndVisitCountScoreFactor:forTopSiteScore:forVisitCountScore:;
+ (BOOL)allowMatch:forMatch:forQueryString:;
@end
