@interface AWELiveSoloKTVShareApi : HTSLiveApi
- (void)handleWithResponse:error:event:requestTimestamp:;
- (void)fetchShareIMCardBuilderWithCardType:schemaUrl:cardParams:completion:;
@end
