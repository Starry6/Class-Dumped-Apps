@interface Banner_Item : IESLivePBBaseMessage
@property (nonatomic) NSString avgColor;
@property (nonatomic) NSString title;
@property (nonatomic) NSMutableArray URLListArray;
@property (nonatomic) Q URLListArray_Count;
@property (nonatomic) NSString uri;
@property (nonatomic) q height;
@property (nonatomic) q width;
@property (nonatomic) GPBInt64Array tabTypesArray;
@property (nonatomic) Q tabTypesArray_Count;
@property (nonatomic) q id_p;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) NSMutableDictionary logExtra;
@property (nonatomic) Q logExtra_Count;
@property (nonatomic) q bannerType;
+ (id)descriptor;
@end
