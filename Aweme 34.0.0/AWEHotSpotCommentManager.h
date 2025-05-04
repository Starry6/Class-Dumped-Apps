@interface AWEHotSpotCommentManager : NSObject
+ (void)requestHotSpotCommentListWithKeyWord:sentenceID:offset:pageSize:refer:completion:;
+ (void)validateHotSpotDiscussionComment:itemID:completion:;
+ (id)__getCommentExpectedSizeInfo;
+ (void)__trackCommentListAPIWithURL:params:responseParams:duration:;
@end
