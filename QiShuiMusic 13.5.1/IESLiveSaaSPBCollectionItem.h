@interface IESLiveSaaSPBCollectionItem : GPBMessage
@property (nonatomic) NSString collectionId;
@property (nonatomic) NSInteger collectionType;
@property (nonatomic) NSString title;
@property (nonatomic) IESLiveSaaSPBImage coverImg;
@property (nonatomic) BOOL hasCoverImg;
@property (nonatomic) NSString originalVid;
@property (nonatomic) NSString videoDuration;
@property (nonatomic) NSString collectionTiming;
@property (nonatomic) NSString tmplVid;
@property (nonatomic) GPBEnumArray reflowTagListArray;
@property (nonatomic) Q reflowTagListArray_Count;
@property (nonatomic) NSString roomId;
@property (nonatomic) NSInteger collectionSource;
@property (nonatomic) NSString originalVidURL;
@property (nonatomic) NSInteger collectionTag;
@property (nonatomic) NSString episodeId;
@property (nonatomic) NSString shareInfo;
@property (nonatomic) q createTime;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSString ugShareInfo;
@property (nonatomic) NSString degradeVidURL;
@property (nonatomic) q eventTime;
+ (id)descriptor;
@end
