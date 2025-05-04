@interface AWECustomPhotoStickerClipedInfo : MTLModel
@property (nonatomic) NSString content;
@property (nonatomic) NSArray points;
@property (nonatomic) NSDictionary bbox;
@property (nonatomic) NSArray bboxList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)boxRect;
- (BOOL)clipInfoValid;
- (id)bboxList;
- (void)setBboxList:;
- (id)content;
- (void)setContent:;
- (id)points;
- (void).cxx_destruct;
- (void)setPoints:;
- (id)bbox;
- (void)setBbox:;
+ (id)JSONKeyPathsByPropertyKey;
@end
