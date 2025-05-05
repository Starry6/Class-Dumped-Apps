@interface CSJLOTShapeTrimPath : NSObject
@property (nonatomic) NSString keyname;
@property (nonatomic) CSJLOTKeyframeGroup start;
@property (nonatomic) CSJLOTKeyframeGroup end;
@property (nonatomic) CSJLOTKeyframeGroup offset;
- (id)keyname;
- (void)_mapFromJSON:;
- (id)end;
- (id)initWithJSON:;
- (id)start;
- (id)offset;
- (void).cxx_destruct;
@end
