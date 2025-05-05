@interface VCPVNImageprintWrapper : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSInteger version;
@property (nonatomic) NSData data;
- (id)data;
- (int)version;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithImageprintType:version:andData:;
- (BOOL)calculateDistance:toWrapper:andError:;
+ (id)wrapperWithImageprintType:version:andData:;
+ (id)generateVNImageprintWithType:archiveData:andError:;
@end
