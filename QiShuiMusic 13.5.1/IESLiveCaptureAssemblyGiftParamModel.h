@interface IESLiveCaptureAssemblyGiftParamModel : IESLiveBridgeModel
@property (nonatomic) NSString imageUrl;
@property (nonatomic) IESLiveCaptureAssemblyGiftGiftCellFrameModel giftCellFrame;
@property (nonatomic) IESLiveCaptureAssemblyGiftGiftToolbarFrameModel giftToolbarFrame;
@property (nonatomic) NSNumber giftId;
@property (nonatomic) NSString mainTitle;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSNumber price;
@property (nonatomic) NSArray pluginList;
+ (id)modelContainerPropertyGenericClass;
@end
