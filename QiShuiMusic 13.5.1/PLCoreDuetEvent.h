@interface PLCoreDuetEvent : NSObject
@property (nonatomic) NSString bundleID;
@property (nonatomic) C updateType;
@property (nonatomic) NSString processName;
@property (nonatomic) NSDictionary childBundleIDToWeight;
@property (nonatomic) NSArray eventIntervals;
- (id)childBundleIDToWeight;
- (id)eventIntervals;
- (id)processName;
- (unsigned char)updateType;
- (void)setUpdateType:;
- (void).cxx_destruct;
- (void)setProcessName:;
- (id)description;
- (void)setEventIntervals:;
- (id)bundleID;
- (void)setChildBundleIDToWeight:;
- (void)setBundleID:;
@end
