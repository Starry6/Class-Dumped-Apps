@interface PageSectionInfo : IESLivePBBaseMessage
@property (nonatomic) GPBInt32Array sectionBgStartColorArray;
@property (nonatomic) Q sectionBgStartColorArray_Count;
@property (nonatomic) GPBInt32Array sectionBgEndColorArray;
@property (nonatomic) Q sectionBgEndColorArray_Count;
@property (nonatomic) HTSLiveImage sectionHeaderImg;
@property (nonatomic) BOOL hasSectionHeaderImg;
@property (nonatomic) NSString entranceText;
@property (nonatomic) NSString entranceSchema;
@property (nonatomic) HTSLiveImage entranceIconImg;
@property (nonatomic) BOOL hasEntranceIconImg;
@property (nonatomic) NSMutableArray giftsArray;
@property (nonatomic) Q giftsArray_Count;
@property (nonatomic) NSString sectionName;
+ (id)descriptor;
@end
