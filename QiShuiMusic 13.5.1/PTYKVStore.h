@interface PTYKVStore : NSObject
@property (nonatomic) NSString business;
@property (nonatomic) NSString aid;
- (id)getKVData;
- (id)getValuesForKeys:;
- (id)initWithBusiness:aid:;
- (BOOL)setKVData:;
- (BOOL)setKVValue:forKey:;
- (BOOL)containsKey:;
- (id)getValueForKey:;
- (void).cxx_destruct;
- (id)business;
- (BOOL)removeKeys:;
- (BOOL)append:;
- (id)aid;
@end
