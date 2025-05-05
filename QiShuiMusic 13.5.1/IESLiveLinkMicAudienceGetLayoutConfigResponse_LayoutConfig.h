@interface IESLiveLinkMicAudienceGetLayoutConfigResponse_LayoutConfig : IESLivePBBaseMessage
@property (nonatomic) IESLiveLinkMicAudienceGetLayoutConfigResponse_Canvas canvas;
@property (nonatomic) BOOL hasCanvas;
@property (nonatomic) NSMutableArray slotsArray;
@property (nonatomic) Q slotsArray_Count;
+ (id)descriptor;
@end
