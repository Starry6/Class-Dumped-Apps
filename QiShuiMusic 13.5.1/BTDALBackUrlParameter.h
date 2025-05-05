@interface BTDALBackUrlParameter : NSObject
@property (nonatomic) BTDALEvent event;
@property (nonatomic) BTDALModel model;
@property (nonatomic) BTDALBackUrl backUrlModel;
@property (nonatomic) BTDALCustomLabel customLabel;
@property (nonatomic) double openTime;
@property (nonatomic) double timeStampId;
@property (nonatomic) BOOL disableTrack;
- (void)setTimeStampId:;
- (id)backUrlModel;
- (BOOL)disableTrack;
- (double)openTime;
- (void)setBackUrlModel:;
- (void)setDisableTrack:;
- (void)setOpenTime:;
- (double)timeStampId;
- (id)model;
- (void)setCustomLabel:;
- (id)init;
- (void)setEvent:;
- (id)event;
- (void)setModel:;
- (id)customLabel;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
@end
