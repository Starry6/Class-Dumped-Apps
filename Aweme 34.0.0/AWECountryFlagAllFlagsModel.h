@interface AWECountryFlagAllFlagsModel : NSObject
@property (nonatomic) NSArray keys;
@property (nonatomic) BOOL isInternal;
@property (nonatomic) NSString version;
- (id)initWithKeys:isInternal:version:;
- (void)setIsInternal:;
- (void)setKeys:;
- (BOOL)isInternal;
- (id)version;
- (void)setVersion:;
- (id)keys;
- (void).cxx_destruct;
- (id)toDictionary;
@end
