@interface IESLiveSaaSPBProfileTagContent : GPBMessage
@property (nonatomic) IESLiveSaaSPBBgColor bgColor;
@property (nonatomic) BOOL hasBgColor;
@property (nonatomic) q tagType;
@property (nonatomic) BOOL isBgPicture;
@property (nonatomic) IESLiveSaaSPBText tagContent;
@property (nonatomic) BOOL hasTagContent;
@property (nonatomic) BOOL isClickTag;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString clickBuriedPoint;
@property (nonatomic) NSMutableDictionary clickBuriedPointParams;
@property (nonatomic) Q clickBuriedPointParams_Count;
@property (nonatomic) NSString showBuriedPoint;
@property (nonatomic) NSMutableDictionary showBuriedPointParams;
@property (nonatomic) Q showBuriedPointParams_Count;
+ (id)descriptor;
@end
