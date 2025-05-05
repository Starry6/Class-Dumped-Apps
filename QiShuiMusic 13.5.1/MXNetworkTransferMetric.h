@interface MXNetworkTransferMetric : MXMetric
@property (nonatomic) NSMeasurement cumulativeWifiUpload;
@property (nonatomic) NSMeasurement cumulativeWifiDownload;
@property (nonatomic) NSMeasurement cumulativeCellularUpload;
@property (nonatomic) NSMeasurement cumulativeCellularDownload;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCumulativeWifiUploadMeasurement:cumulativeWifiDownloadMeasurement:cumulativeCellularUploadMeasurement:cumulativeCellularDownloadMeasurement:;
- (id)cumulativeWifiUpload;
- (id)cumulativeWifiDownload;
- (id)cumulativeCellularUpload;
- (id)cumulativeCellularDownload;
+ (BOOL)supportsSecureCoding;
@end
