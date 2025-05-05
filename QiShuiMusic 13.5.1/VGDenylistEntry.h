@interface VGDenylistEntry : NSObject
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithModelId:firmwareIds:years:models:;
- (BOOL)isSupersetOfEntry:;
@end
