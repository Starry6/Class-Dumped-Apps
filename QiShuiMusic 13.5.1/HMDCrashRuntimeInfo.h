@interface HMDCrashRuntimeInfo : HMDCrashModel
@property (nonatomic) NSString selector;
@property (nonatomic) NSArray crashInfos;
- (id)crashInfos;
- (void)setCrashInfos:;
- (id)selector;
- (void)updateWithDictionary:;
- (void)setSelector:;
- (void).cxx_destruct;
@end
