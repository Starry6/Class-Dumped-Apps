@interface AWELiveVSPremiereImage : AWEBaseApiModel
@property (nonatomic) NSDictionary previewImageUp;
@property (nonatomic) NSDictionary previewImageDown;
@property (nonatomic) q previewType;
@property (nonatomic) NSString previewWordUp;
@property (nonatomic) NSString previewWordDown;
- (id)previewWordDown;
- (id)previewImageDown;
- (id)previewWordUp;
- (id)previewImageUp;
- (void)setPreviewImageUp:;
- (void)setPreviewImageDown:;
- (void)setPreviewWordUp:;
- (void)setPreviewWordDown:;
- (void).cxx_destruct;
- (void)setPreviewType:;
- (long long)previewType;
+ (id)JSONKeyPathsByPropertyKey;
@end
