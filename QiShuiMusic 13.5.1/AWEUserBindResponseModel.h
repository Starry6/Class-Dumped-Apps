@interface AWEUserBindResponseModel : IESIMBaseApiModel
@property (nonatomic) NSString insId;
@property (nonatomic) AWEUserBindFailReasonModel failReason;
@property (nonatomic) AWEUserBindYoutubeInfoModel youtubeInfo;
- (id)insId;
- (id)youtubeInfo;
- (void).cxx_destruct;
- (id)failReason;
+ (id)failReasonJSONTransformer;
+ (id)youtubeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
