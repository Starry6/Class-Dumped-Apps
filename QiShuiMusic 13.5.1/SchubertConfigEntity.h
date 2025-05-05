@interface SchubertConfigEntity : NSManagedObject
@property (nonatomic) NSString audioQuality;
@property (nonatomic) s cycleManner;
@property (nonatomic) BOOL useCellularDownload;
@property (nonatomic) BOOL useCellularPlayback;
@property (nonatomic) BOOL useLowDataFlow;
@property (nonatomic) BOOL isAudioNormalizationEnabled;
@property (nonatomic) BOOL isSingleMode;
- (void)awakeFromInsert;
- (id)initWithEntity:insertIntoManagedObjectContext:;
@end
