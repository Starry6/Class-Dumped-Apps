@interface TSgPTPFDEtEPort : TSgPTPNetworkPort
@property (nonatomic) TSgPTPPortStatistics statistics;
- (void).cxx_destruct;
- (void)setStatistics:;
- (id)statistics;
- (id)initWithImplXPC:;
- (void)updateWithXPCStatistics:;
+ (id)diagnosticDescriptionForInfo:withIndent:;
@end
