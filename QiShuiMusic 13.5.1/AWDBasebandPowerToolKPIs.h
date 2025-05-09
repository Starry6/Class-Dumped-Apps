@interface AWDBasebandPowerToolKPIs : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasRadarPriority;
@property (nonatomic) NSInteger radarPriority;
@property (nonatomic) BOOL hasArmUtilityThresholdPoint;
@property (nonatomic) NSInteger armUtilityThresholdPoint;
@property (nonatomic) Q armUtilityPDFsCount;
@property (nonatomic) ^i armUtilityPDFs;
@property (nonatomic) Q causeCodeOOSARMUtilitysCount;
@property (nonatomic) ^i causeCodeOOSARMUtilitys;
@property (nonatomic) Q causeCodeOOSDurationsCount;
@property (nonatomic) ^i causeCodeOOSDurations;
@property (nonatomic) Q causeCodeTcXONotShuttingARMUtilitysCount;
@property (nonatomic) ^i causeCodeTcXONotShuttingARMUtilitys;
@property (nonatomic) Q causeCodeTcXONotShuttingDurationsCount;
@property (nonatomic) ^i causeCodeTcXONotShuttingDurations;
@property (nonatomic) Q causeCodeBackgroundActivityARMUtilitysCount;
@property (nonatomic) ^i causeCodeBackgroundActivityARMUtilitys;
@property (nonatomic) Q causeCodeBackgroundActivityDurationsCount;
@property (nonatomic) ^i causeCodeBackgroundActivityDurations;
@property (nonatomic) Q causeCodeRACHFailARMUtilitysCount;
@property (nonatomic) ^i causeCodeRACHFailARMUtilitys;
@property (nonatomic) Q causeCodeRACHFailDurationsCount;
@property (nonatomic) ^i causeCodeRACHFailDurations;
@property (nonatomic) Q causeCodeStruckInDCHARMUtilitysCount;
@property (nonatomic) ^i causeCodeStruckInDCHARMUtilitys;
@property (nonatomic) Q causeCodeStruckInDCHDurationsCount;
@property (nonatomic) ^i causeCodeStruckInDCHDurations;
@property (nonatomic) Q causeCodeMarginalCoverageARMUtilitysCount;
@property (nonatomic) ^i causeCodeMarginalCoverageARMUtilitys;
@property (nonatomic) Q causeCodeMarginalCoverageDurationsCount;
@property (nonatomic) ^i causeCodeMarginalCoverageDurations;
@property (nonatomic) Q causeCodeUnknownARMUtilitysCount;
@property (nonatomic) ^i causeCodeUnknownARMUtilitys;
@property (nonatomic) Q causeCodeUnknownDurationsCount;
@property (nonatomic) ^i causeCodeUnknownDurations;
@property (nonatomic) Q causeCodeCumulativeARMUtilitysCount;
@property (nonatomic) ^i causeCodeCumulativeARMUtilitys;
@property (nonatomic) Q causeCodeCumulativeDurationsCount;
@property (nonatomic) ^i causeCodeCumulativeDurations;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setRadarPriority:;
- (void)setHasRadarPriority:;
- (BOOL)hasRadarPriority;
- (void)setArmUtilityThresholdPoint:;
- (void)setHasArmUtilityThresholdPoint:;
- (BOOL)hasArmUtilityThresholdPoint;
- (unsigned long long)armUtilityPDFsCount;
- (id)armUtilityPDFs;
- (void)clearArmUtilityPDFs;
- (void)addArmUtilityPDF:;
- (int)armUtilityPDFAtIndex:;
- (void)setArmUtilityPDFs:count:;
- (unsigned long long)causeCodeOOSARMUtilitysCount;
- (id)causeCodeOOSARMUtilitys;
- (void)clearCauseCodeOOSARMUtilitys;
- (void)addCauseCodeOOSARMUtility:;
- (int)causeCodeOOSARMUtilityAtIndex:;
- (void)setCauseCodeOOSARMUtilitys:count:;
- (unsigned long long)causeCodeOOSDurationsCount;
- (id)causeCodeOOSDurations;
- (void)clearCauseCodeOOSDurations;
- (void)addCauseCodeOOSDurations:;
- (int)causeCodeOOSDurationsAtIndex:;
- (void)setCauseCodeOOSDurations:count:;
- (unsigned long long)causeCodeTcXONotShuttingARMUtilitysCount;
- (id)causeCodeTcXONotShuttingARMUtilitys;
- (void)clearCauseCodeTcXONotShuttingARMUtilitys;
- (void)addCauseCodeTcXONotShuttingARMUtility:;
- (int)causeCodeTcXONotShuttingARMUtilityAtIndex:;
- (void)setCauseCodeTcXONotShuttingARMUtilitys:count:;
- (unsigned long long)causeCodeTcXONotShuttingDurationsCount;
- (id)causeCodeTcXONotShuttingDurations;
- (void)clearCauseCodeTcXONotShuttingDurations;
- (void)addCauseCodeTcXONotShuttingDurations:;
- (int)causeCodeTcXONotShuttingDurationsAtIndex:;
- (void)setCauseCodeTcXONotShuttingDurations:count:;
- (unsigned long long)causeCodeBackgroundActivityARMUtilitysCount;
- (id)causeCodeBackgroundActivityARMUtilitys;
- (void)clearCauseCodeBackgroundActivityARMUtilitys;
- (void)addCauseCodeBackgroundActivityARMUtility:;
- (int)causeCodeBackgroundActivityARMUtilityAtIndex:;
- (void)setCauseCodeBackgroundActivityARMUtilitys:count:;
- (unsigned long long)causeCodeBackgroundActivityDurationsCount;
- (id)causeCodeBackgroundActivityDurations;
- (void)clearCauseCodeBackgroundActivityDurations;
- (void)addCauseCodeBackgroundActivityDurations:;
- (int)causeCodeBackgroundActivityDurationsAtIndex:;
- (void)setCauseCodeBackgroundActivityDurations:count:;
- (unsigned long long)causeCodeRACHFailARMUtilitysCount;
- (id)causeCodeRACHFailARMUtilitys;
- (void)clearCauseCodeRACHFailARMUtilitys;
- (void)addCauseCodeRACHFailARMUtility:;
- (int)causeCodeRACHFailARMUtilityAtIndex:;
- (void)setCauseCodeRACHFailARMUtilitys:count:;
- (unsigned long long)causeCodeRACHFailDurationsCount;
- (id)causeCodeRACHFailDurations;
- (void)clearCauseCodeRACHFailDurations;
- (void)addCauseCodeRACHFailDurations:;
- (int)causeCodeRACHFailDurationsAtIndex:;
- (void)setCauseCodeRACHFailDurations:count:;
- (unsigned long long)causeCodeStruckInDCHARMUtilitysCount;
- (id)causeCodeStruckInDCHARMUtilitys;
- (void)clearCauseCodeStruckInDCHARMUtilitys;
- (void)addCauseCodeStruckInDCHARMUtility:;
- (int)causeCodeStruckInDCHARMUtilityAtIndex:;
- (void)setCauseCodeStruckInDCHARMUtilitys:count:;
- (unsigned long long)causeCodeStruckInDCHDurationsCount;
- (id)causeCodeStruckInDCHDurations;
- (void)clearCauseCodeStruckInDCHDurations;
- (void)addCauseCodeStruckInDCHDurations:;
- (int)causeCodeStruckInDCHDurationsAtIndex:;
- (void)setCauseCodeStruckInDCHDurations:count:;
- (unsigned long long)causeCodeMarginalCoverageARMUtilitysCount;
- (id)causeCodeMarginalCoverageARMUtilitys;
- (void)clearCauseCodeMarginalCoverageARMUtilitys;
- (void)addCauseCodeMarginalCoverageARMUtility:;
- (int)causeCodeMarginalCoverageARMUtilityAtIndex:;
- (void)setCauseCodeMarginalCoverageARMUtilitys:count:;
- (unsigned long long)causeCodeMarginalCoverageDurationsCount;
- (id)causeCodeMarginalCoverageDurations;
- (void)clearCauseCodeMarginalCoverageDurations;
- (void)addCauseCodeMarginalCoverageDurations:;
- (int)causeCodeMarginalCoverageDurationsAtIndex:;
- (void)setCauseCodeMarginalCoverageDurations:count:;
- (unsigned long long)causeCodeUnknownARMUtilitysCount;
- (id)causeCodeUnknownARMUtilitys;
- (void)clearCauseCodeUnknownARMUtilitys;
- (void)addCauseCodeUnknownARMUtility:;
- (int)causeCodeUnknownARMUtilityAtIndex:;
- (void)setCauseCodeUnknownARMUtilitys:count:;
- (unsigned long long)causeCodeUnknownDurationsCount;
- (id)causeCodeUnknownDurations;
- (void)clearCauseCodeUnknownDurations;
- (void)addCauseCodeUnknownDurations:;
- (int)causeCodeUnknownDurationsAtIndex:;
- (void)setCauseCodeUnknownDurations:count:;
- (unsigned long long)causeCodeCumulativeARMUtilitysCount;
- (id)causeCodeCumulativeARMUtilitys;
- (void)clearCauseCodeCumulativeARMUtilitys;
- (void)addCauseCodeCumulativeARMUtility:;
- (int)causeCodeCumulativeARMUtilityAtIndex:;
- (void)setCauseCodeCumulativeARMUtilitys:count:;
- (unsigned long long)causeCodeCumulativeDurationsCount;
- (id)causeCodeCumulativeDurations;
- (void)clearCauseCodeCumulativeDurations;
- (void)addCauseCodeCumulativeDurations:;
- (int)causeCodeCumulativeDurationsAtIndex:;
- (void)setCauseCodeCumulativeDurations:count:;
- (int)radarPriority;
- (int)armUtilityThresholdPoint;
@end
