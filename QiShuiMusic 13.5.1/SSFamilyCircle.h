@interface SSFamilyCircle : NSObject
@property (nonatomic) NSArray familyMembers;
@property (nonatomic) NSArray iTunesAccountNames;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (id)familyMembers;
- (void).cxx_destruct;
- (void)setFamilyMembers:;
- (id)allITunesIdentifiers;
- (id)allITunesAccountNames;
- (id)initWithCacheRepresentation:;
- (id)newCacheRepresentation;
- (id)iTunesAccountNames;
- (void)setITunesAccountNames:;
@end
