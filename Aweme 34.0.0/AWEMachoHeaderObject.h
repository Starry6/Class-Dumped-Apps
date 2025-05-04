@interface AWEMachoHeaderObject : NSObject
@property (nonatomic) r^{mach_header_64=} machoHeader;
@property (nonatomic) NSString sectionName;
- (id)initWithMachoHeader:andSectionName:;
- (id)machoHeader;
- (void)setMachoHeader:;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (void)setSectionName:;
- (id)sectionName;
@end
