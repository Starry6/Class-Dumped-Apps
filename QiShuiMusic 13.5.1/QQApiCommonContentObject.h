@interface QQApiCommonContentObject : QQApiObject
@property (nonatomic) I layoutType;
@property (nonatomic) NSData previewImageData;
@property (nonatomic) NSArray textArray;
@property (nonatomic) NSArray pictureDataArray;
- (id)pictureDataArray;
- (void)setPictureDataArray:;
- (void)setTextArray:;
- (unsigned int)layoutType;
- (void)setLayoutType:;
- (id)toDictionary;
- (id)textArray;
- (id)previewImageData;
- (void)setPreviewImageData:;
+ (id)objectWithDictionary:;
+ (id)objectWithLayoutType:textArray:pictureArray:previewImageData:;
@end
