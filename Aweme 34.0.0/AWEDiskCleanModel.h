@interface AWEDiskCleanModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString detail;
@property (nonatomic) NSString desc;
@property (nonatomic) Q type;
@property (nonatomic) BOOL haveCache;
@property (nonatomic) BOOL separatorLineHidden;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)haveCache;
- (void)setHaveCache:;
- (BOOL)separatorLineHidden;
- (void)setSeparatorLineHidden:;
- (void)setDetail:;
- (void)setDesc:;
- (unsigned long long)type;
- (id)desc;
- (void)setType:;
- (id)detail;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
@end
