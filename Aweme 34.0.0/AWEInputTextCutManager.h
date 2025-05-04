@interface AWEInputTextCutManager : HTSService
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString currentString;
@property (nonatomic) AWESafeMutableArray wordsList;
@property (nonatomic) BOOL allowCommit;
@property (nonatomic) BOOL deleteInsert;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)beginEditing:enterFrom:;
- (void)commitTracker:;
- (void)setWordsList:;
- (id)wordsList;
- (void)setCurrentString:;
- (void)setAllowCommit:;
- (void)setDeleteInsert:;
- (BOOL)deleteInsert;
- (BOOL)allowCommit;
- (void)textDidChange:;
- (void).cxx_destruct;
- (id)currentString;
@end
