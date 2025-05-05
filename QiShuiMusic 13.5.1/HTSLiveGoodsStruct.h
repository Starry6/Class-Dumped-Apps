@interface HTSLiveGoodsStruct : IESLivePBBaseMessage
@property (nonatomic) q goodsId;
@property (nonatomic) q goodsType;
@property (nonatomic) NSString name;
@property (nonatomic) q diamondCount;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString description_p;
@property (nonatomic) q offlineTime;
@property (nonatomic) NSString extra;
@property (nonatomic) GPBInt64Array optionsArray;
@property (nonatomic) Q optionsArray_Count;
+ (id)descriptor;
@end
