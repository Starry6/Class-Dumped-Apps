@interface BLSFrameSpecifierModel : NSObject
@property (nonatomic) NSArray specifiers;
- (id)specifiers;
- (id)init;
- (void)dealloc;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)specifierAtPresentationDate:;
- (void)addSpecifiers:;
- (void)purgeAllButOneSpecifiersBeforeDate:;
- (void)purgeAllSpecifiersOnOrAfterDate:;
@end
