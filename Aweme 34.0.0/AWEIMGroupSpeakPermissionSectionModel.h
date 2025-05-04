@interface AWEIMGroupSpeakPermissionSectionModel : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSArray cellModels;
@property (nonatomic) NSString reuseHeaderViewIdentifier;
@property (nonatomic) NSString reuseFooterViewIdentifier;
@property (nonatomic) BOOL sectionCornerRadius;
- (id)cellModels;
- (id)reuseHeaderViewIdentifier;
- (id)reuseFooterViewIdentifier;
- (id)initWithIdentifier:cellModels:;
- (void)setReuseFooterViewIdentifier:;
- (void)setReuseHeaderViewIdentifier:;
- (unsigned long long)hash;
- (BOOL)sectionCornerRadius;
- (id)identifier;
- (void)setSectionCornerRadius:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
@end
