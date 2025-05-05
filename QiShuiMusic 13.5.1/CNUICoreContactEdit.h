@interface CNUICoreContactEdit : NSObject
@property (nonatomic) CNContact original;
@property (nonatomic) CNContact modified;
@property (nonatomic) BOOL originalAndModifiedDiffer;
- (id)modified;
- (id)initWithContact:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)original;
- (BOOL)isEqual:;
- (id)initWithOriginalContact:modifiedContact:;
- (id)editBySettingModifiedContact:;
- (BOOL)originalAndModifiedDiffer;
- (BOOL)modifiesContact:;
@end
