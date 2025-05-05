@interface HTSLiveDisplayItem : IESLivePBBaseMessage
@property (nonatomic) NSInteger displayItemType;
@property (nonatomic) BOOL comboFresh;
@property (nonatomic) HTSLiveSchemaInfo schemaInfo;
@property (nonatomic) BOOL hasSchemaInfo;
@property (nonatomic) HTSLiveImagesItem imagesItem;
@property (nonatomic) BOOL hasImagesItem;
@property (nonatomic) HTSLiveTextItem textItem;
@property (nonatomic) BOOL hasTextItem;
@property (nonatomic) HTSLiveDisplayItemFormat format;
@property (nonatomic) BOOL hasFormat;
+ (id)descriptor;
@end
