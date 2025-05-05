@interface CPLSharedRecordMerger : NSObject
@property (nonatomic) <CPLSharedRecordPropertyMapping> mapping;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithMapping:;
- (void).cxx_destruct;
- (id)mapping;
- (void)mergeRecord:isSharedRecord:inPrivateRecord:;
@end
