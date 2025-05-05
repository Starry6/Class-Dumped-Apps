@interface IESECHotAtmosphere : GPBMessage
@property (nonatomic) NSString img;
@property (nonatomic) NSString saleNum;
@property (nonatomic) q type;
@property (nonatomic) NSString num;
@property (nonatomic) NSString bgColor;
@property (nonatomic) NSString borderColor;
@property (nonatomic) q leftMargin;
@property (nonatomic) q uiType;
@property (nonatomic) NSMutableArray bgColorsArray;
@property (nonatomic) Q bgColorsArray_Count;
@property (nonatomic) NSMutableArray borderColorsArray;
@property (nonatomic) Q borderColorsArray_Count;
@property (nonatomic) NSString topImg;
+ (id)descriptor;
@end
