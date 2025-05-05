@interface PFMetadataStateBreadcrumb : NSObject
@property (nonatomic) double timeInterval;
@property (nonatomic) Q threadID;
@property (nonatomic) I qualityOfService;
@property (nonatomic) NSString message;
@property (nonatomic) NSString breadcrumbDescription;
- (unsigned int)qualityOfService;
- (unsigned long long)threadID;
- (double)timeInterval;
- (id)message;
- (void).cxx_destruct;
- (id)initWithTimeInterval:message:;
- (id)breadcrumbDescription;
@end
