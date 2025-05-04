@interface AWEPOICommentUploadTokenHelper : NSObject
+ (void)getCommentUploadVideoToken:;
+ (BOOL)isTokenValidWithExpiredTime:;
+ (void)getVideoMetaWithVid:completion:;
@end
