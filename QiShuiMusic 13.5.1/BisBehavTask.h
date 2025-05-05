@interface BisBehavTask : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString idx;
@property (nonatomic) NSString dur;
@property (nonatomic) NSString quality;
@property (nonatomic) NSString extInfo;
- (id)extInfo;
- (void)setDur:;
- (id)dur;
- (void)setIdx:;
- (void)setExtInfo:;
- (id)quality;
- (void)setName:;
- (void)setQuality:;
- (void).cxx_destruct;
- (id)name;
- (id)idx;
@end
