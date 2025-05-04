@interface AWEIMSilverWingStreamSubElementModel : MTLModel
@property (nonatomic) Q idx;
@property (nonatomic) NSString type;
@property (nonatomic) NSString content;
@property (nonatomic) NSArray range;
@property (nonatomic) BOOL isStream;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIdx:;
- (id)getContentDict;
- (void)setIsStream:;
- (id)range;
- (void)setRange:;
- (id)content;
- (id)type;
- (void)setContent:;
- (void)setType:;
- (void).cxx_destruct;
- (unsigned long long)idx;
- (BOOL)isStream;
+ (BOOL)automaticallyDefaultMapping;
@end
