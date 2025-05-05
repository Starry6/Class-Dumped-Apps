@interface NENexusBrowse : NSObject
@property (nonatomic) NWBrowseDescriptor descriptor;
@property (nonatomic) NWParameters parameters;
@property (nonatomic) NSUUID clientIdentifier;
- (id)descriptor;
- (void)setDescriptor:;
- (id)parameters;
- (void).cxx_destruct;
- (void)setClientIdentifier:;
- (void)setParameters:;
- (id)clientIdentifier;
@end
