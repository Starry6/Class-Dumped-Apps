@interface CKRecordObserver : NSObject
@property (nonatomic) CKContainerSetupInfo containerInfo;
@property (nonatomic) <CKRecordObservable> provider;
@property (nonatomic) NSString recordType;
- (id)init;
- (id)recordType;
- (id)provider;
- (void).cxx_destruct;
- (void)invalidate;
- (id)copyWithZone:;
- (id)initWithContainer:recordType:;
- (id)initWithContainerInfo:recordType:provider:;
- (void)registerWithBlock:;
- (id)containerInfo;
@end
