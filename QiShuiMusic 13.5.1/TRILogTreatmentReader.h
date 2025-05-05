@interface TRILogTreatmentReader : NSObject
@property (nonatomic) NSString path;
- (id)path;
- (id)treatments;
- (void).cxx_destruct;
- (id)initWithProjectId:paths:;
- (id)namespaceLoggingTreatmentPath;
- (id)fetchRolloutLogNamespaces;
+ (id)readerWithProjectId:paths:;
@end
