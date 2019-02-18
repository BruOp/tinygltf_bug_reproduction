// This works
//#include <bx/bx.h>

#define TINYGLTF_IMPLEMENTATION
#define STB_IMAGE_IMPLEMENTATION
#define TINYGLTF_NO_STB_IMAGE_WRITE 
#include <tinygltf/tiny_gltf.h>

// This does not
#include <bx/bx.h>

int main(int argc, char* argv[])
{
	return 0;
}
